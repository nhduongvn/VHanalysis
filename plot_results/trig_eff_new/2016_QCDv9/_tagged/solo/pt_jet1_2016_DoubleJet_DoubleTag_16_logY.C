#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16/pt_jet1_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16", "pt_jet1_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->Range(-100,-0.6070063,566.6667,2.452757);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet1__251 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet1__251","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(8,6);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(9,20);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(10,41);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(11,74);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(12,58);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(13,52);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(14,40);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(15,33);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(16,16);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(17,27);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(18,15);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(19,12);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(20,11);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(21,13);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(22,13);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(23,8);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(24,7);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(25,8);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(26,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(27,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(28,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(29,3);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(30,3);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(31,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(32,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(33,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(34,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(35,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(36,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(40,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(42,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(45,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetBinContent(51,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetEntries(479);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 479    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  145.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet1__251);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__251->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16);
}
