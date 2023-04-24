#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ref/pt_jet0_2018_QuadJet_noTag_18_ref
//=========  (Mon Apr 24 10:45:55 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ref", "pt_jet0_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->Range(-100,1.301361,566.6667,5.530514);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,106);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,6439);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,24599);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,44729);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,59047);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,66024);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,67616);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,65444);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,61435);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,57225);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,51840);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,46804);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,42444);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,37476);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,33173);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,29247);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,26056);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,22496);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,19887);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,17881);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,15664);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,13872);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,12523);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,10993);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,9774);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,8627);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,7876);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,6910);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,6115);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,5492);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,5073);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,4476);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,3927);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,3607);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,3328);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,2944);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,2646);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,2423);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,2267);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,2002);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1810);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,1657);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,1506);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,1341);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,1224);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,1142);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,12333);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(931520);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 931520 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.77");
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
   pt_jet0_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ref);
}
