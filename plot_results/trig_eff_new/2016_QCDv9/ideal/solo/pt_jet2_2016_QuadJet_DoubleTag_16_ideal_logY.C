#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16_ideal/pt_jet2_2016_QuadJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16_ideal", "pt_jet2_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->Range(-100,-0.6345905,566.6667,2.701015);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet2__245 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet2__245","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(5,3);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(6,73);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(7,108);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(8,123);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(9,99);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(10,61);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(11,65);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(12,35);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(13,35);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(14,23);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(15,17);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(16,13);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(17,14);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(18,5);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(19,4);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(20,5);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(21,2);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(22,4);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(25,2);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(27,1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(28,1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(29,1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetBinContent(32,1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetEntries(695);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 695    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  93.75");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  36.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet2__245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_pt_jet2__245->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__245->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16_ideal);
}
