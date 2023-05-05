#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.7059606,566.6667,3.343345);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__12 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__12","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(5,158);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(6,458);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(7,397);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(8,294);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(9,184);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(10,140);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(11,91);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(12,67);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(13,43);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(14,32);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(15,25);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(16,14);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(17,14);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(18,5);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(19,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(20,5);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(21,6);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(23,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(24,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetEntries(1943);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1943   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.01");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   28.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__12->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref);
}
