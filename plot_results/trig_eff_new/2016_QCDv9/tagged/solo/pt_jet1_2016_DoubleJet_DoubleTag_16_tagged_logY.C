#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_tagged/pt_jet1_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet1_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->Range(-100,-0.6055189,566.6667,2.43937);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet1__131 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet1__131","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(8,6);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(9,20);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(10,40);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(11,72);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(12,57);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(13,52);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(14,40);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(15,33);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(16,15);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(17,26);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(18,15);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(19,12);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(20,11);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(21,13);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(22,13);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(23,8);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(24,7);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(25,8);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(26,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(27,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(28,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(29,3);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(30,3);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(31,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(32,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(33,2);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(34,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(35,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(36,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(40,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(42,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(45,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetBinContent(51,1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetEntries(472);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 472    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  145.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  55.94");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet1__131);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__131->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_tagged);
}
