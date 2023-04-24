#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_ref/pt_jet3_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_ref", "pt_jet3_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_ref->Range(-100,-1.02941,566.6667,6.254387);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3_ref__90 = new TH1D("_QuadJet_noTag_pt_jet3_ref__90","",50,0,500);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(5,147186);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(6,177198);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(7,87221);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(8,46257);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(9,25916);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(10,14716);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(11,8932);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(12,5186);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(13,3286);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(14,2171);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(15,1434);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(16,860);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(17,584);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(18,426);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(19,263);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(20,182);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(21,157);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(22,106);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(23,71);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(24,62);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(25,52);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(26,24);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(27,20);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(28,21);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(29,14);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(30,12);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(31,6);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(32,6);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(33,7);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(34,3);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(35,4);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(36,1);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(37,5);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(38,2);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(40,1);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(41,2);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(45,1);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(47,2);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(49,1);
   _QuadJet_noTag_pt_jet3_ref__90->SetBinContent(51,2);
   _QuadJet_noTag_pt_jet3_ref__90->SetEntries(522400);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 522400 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.66");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3_ref__90->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3_ref__90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3_ref__90->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3_ref__90->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3_ref__90->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3_ref__90->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__90->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3_ref__90->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__90->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__90->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet3_2017_QuadJet_noTag_17_ref->cd();
   pt_jet3_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet3_2017_QuadJet_noTag_17_ref);
}
