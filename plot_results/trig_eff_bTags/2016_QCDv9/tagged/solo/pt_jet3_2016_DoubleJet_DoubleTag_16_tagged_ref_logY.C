#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref/pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref", "pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->Range(-100,-0.6701959,566.6667,3.021463);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLogy();
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet3_ref__156 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet3_ref__156","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(5,112);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(6,237);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(7,218);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(8,124);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(9,88);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(10,60);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(11,51);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(12,34);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(13,19);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(14,9);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(15,10);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(16,7);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(17,4);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(18,2);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(19,1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(20,2);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(22,1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(24,1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(26,1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetBinContent(27,2);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetEntries(983);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 983    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  74.35");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.63");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet3_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3_ref__156->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16_tagged_ref);
}
