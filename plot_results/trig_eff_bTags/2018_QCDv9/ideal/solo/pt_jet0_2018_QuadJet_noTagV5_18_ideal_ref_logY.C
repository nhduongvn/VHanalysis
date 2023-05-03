#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref/pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref = new TCanvas("pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref", "pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->Range(-100,-0.277754,566.6667,2.499786);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_pt_jet0_ref__18 = new TH1D("_QuadJet_noTagV5_ideal_pt_jet0_ref__18","",50,0,500);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(10,10);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(11,45);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(12,85);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(13,70);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(14,83);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(15,88);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(16,70);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(17,75);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(18,76);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(19,69);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(20,62);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(21,57);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(22,58);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(23,47);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(24,52);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(25,38);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(26,29);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(27,44);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(28,34);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(29,24);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(30,17);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(31,24);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(32,26);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(33,14);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(34,20);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(35,13);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(36,14);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(37,8);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(38,5);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(39,14);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(40,12);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(41,11);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(42,11);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(43,6);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(44,11);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(45,8);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(46,4);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(47,3);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(48,4);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(49,3);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(50,2);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetBinContent(51,44);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetEntries(1390);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1390   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  211.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_pt_jet0_ref__18);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet0_ref__18->Draw("HIST");
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->Modified();
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->cd();
   pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref->SetSelected(pt_jet0_2018_QuadJet_noTagV5_18_ideal_ref);
}
