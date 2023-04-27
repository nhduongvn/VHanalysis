#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref/pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref", "pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->Range(-100,-0.7182164,566.6667,3.453647);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3_ref__75 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3_ref__75","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(5,293);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(6,574);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(7,392);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(8,281);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(9,165);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(10,133);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(11,87);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(12,64);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(13,41);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(14,29);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(15,23);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(16,12);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(17,13);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(18,4);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(19,4);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(20,5);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(21,6);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(23,2);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(24,2);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetEntries(2132);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2132   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  73.29");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.06");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3_ref__75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__75->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_tagged_ref);
}
