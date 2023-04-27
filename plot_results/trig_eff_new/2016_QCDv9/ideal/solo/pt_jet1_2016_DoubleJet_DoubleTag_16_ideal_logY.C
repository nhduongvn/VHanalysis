#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_ideal/pt_jet1_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet1_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Range(-100,-0.6055189,566.6667,2.43937);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet1__239 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet1__239","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(10,40);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(11,72);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(12,57);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(13,52);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(14,40);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(15,33);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(16,15);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(17,26);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(18,15);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(19,12);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(20,11);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(21,13);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(22,13);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(23,8);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(24,7);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(25,8);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(26,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(27,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(28,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(29,3);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(30,3);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(31,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(32,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(33,2);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(34,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(35,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(36,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(40,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(42,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(45,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetBinContent(51,1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetEntries(446);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 446    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  149.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  55.49");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet1__239);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__239->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_ideal);
}
