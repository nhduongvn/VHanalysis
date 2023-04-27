#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ref/pt_jet0_2017_QuadJet_noTag_17_ref
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ref", "pt_jet0_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->Range(-100,1.010756,566.6667,5.296521);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,55);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,3462);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,14431);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,25612);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,34222);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,37757);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,38940);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,38111);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,35816);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,32895);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,29905);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,26873);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,24133);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,21874);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,18877);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,16710);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,14759);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,13054);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,11408);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,10292);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,8813);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,7814);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,6927);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,6221);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,5719);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,4881);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,4324);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,4049);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,3489);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,3158);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,2892);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,2460);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,2204);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,1988);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,1955);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,1635);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,1497);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,1340);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,1224);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,1094);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1018);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,933);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,818);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,773);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,703);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,622);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,6965);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(534702);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 534702 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.28");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__6->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ref->cd();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ref);
}
