#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref/pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref", "pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->Range(-100,-0.6244274,566.6667,2.609546);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet1_ref__129 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet1_ref__129","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(5,1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(6,22);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(7,58);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(8,71);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(9,102);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(10,90);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(11,83);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(12,79);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(13,74);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(14,51);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(15,43);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(16,44);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(17,24);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(18,28);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(19,23);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(20,33);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(21,27);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(22,25);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(23,18);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(24,9);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(25,10);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(26,9);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(27,6);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(28,7);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(29,8);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(30,6);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(31,4);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(32,3);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(34,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(35,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(36,1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(37,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(38,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(40,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(41,1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(42,1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(43,5);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(45,2);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetBinContent(51,4);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetEntries(983);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 983    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  136.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =     67");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet1_ref__129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1_ref__129->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_tagged_ref);
}
