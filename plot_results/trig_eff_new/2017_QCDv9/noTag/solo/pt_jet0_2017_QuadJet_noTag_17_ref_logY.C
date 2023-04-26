#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ref/pt_jet0_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ref", "pt_jet0_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->Range(-100,0.9838533,566.6667,5.295054);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,52);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,3426);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,14302);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,25359);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,33949);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,37456);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,38582);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,37788);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,35514);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,32584);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,29621);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,26628);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,23924);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,21690);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,18715);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,16564);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,14616);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,12933);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,11301);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,10213);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,8717);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,7740);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,6870);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,6175);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,5675);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,4836);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,4286);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,4011);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,3461);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,3133);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,2859);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,2430);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,2185);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,1970);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,1931);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,1612);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,1480);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,1331);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,1210);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,1077);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1009);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,918);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,810);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,763);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,698);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,615);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,6905);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(529924);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 529924 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.25");
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
