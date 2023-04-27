#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.6764626,566.6667,3.077863);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__129 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__129","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(5,89);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(6,266);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(7,233);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(8,162);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(9,124);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(10,86);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(11,58);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(12,39);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(13,16);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(14,16);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(15,18);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(16,11);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(17,7);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(18,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(21,3);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetEntries(1132);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1132   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  76.13");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__129->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref);
}
