#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ref/pt_jet3_2017_QuadJet_TripleTag_17_ref
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ref = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ref", "pt_jet3_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->Range(-100,-1.030183,566.6667,6.261347);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3_ref__21 = new TH1D("_QuadJet_TripleTag_pt_jet3_ref__21","",50,0,500);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(5,149322);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(6,179740);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(7,88492);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(8,46902);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(9,26291);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(10,14940);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(11,9066);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(12,5268);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(13,3321);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(14,2192);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(15,1460);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(16,866);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(17,590);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(18,432);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(19,268);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(20,187);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(21,158);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(22,107);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(23,71);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(24,62);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(25,52);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(26,25);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(27,22);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(28,21);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(29,14);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(30,12);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(31,6);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(32,6);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(33,7);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(34,3);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(35,4);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(36,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(37,5);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(40,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(47,2);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(49,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetEntries(529924);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 529924 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.65");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.11");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3_ref__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3_ref__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3_ref__21->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_ref->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ref);
}
