#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref/pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref", "pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->Range(-100,-0.6170261,566.6667,2.542935);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet1_ref__240 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet1_ref__240","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(10,89);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(11,83);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(12,79);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(13,74);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(14,51);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(15,43);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(16,44);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(17,24);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(18,28);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(19,23);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(20,33);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(21,27);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(22,25);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(23,18);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(24,9);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(25,10);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(26,9);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(27,6);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(28,7);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(29,8);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(30,6);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(31,4);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(32,3);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(33,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(34,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(35,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(36,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(37,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(38,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(40,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(41,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(42,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(43,5);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(45,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetBinContent(51,4);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetEntries(728);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 728    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  158.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  65.08");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet1_ref__240);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1_ref__240->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_ref);
}
