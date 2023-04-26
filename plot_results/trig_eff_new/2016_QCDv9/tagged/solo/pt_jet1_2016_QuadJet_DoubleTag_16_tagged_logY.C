#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_DoubleTag_16_tagged/pt_jet1_2016_QuadJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet1_2016_QuadJet_DoubleTag_16_tagged", "pt_jet1_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->Range(-100,-0.6084541,566.6667,2.465787);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet1__125 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet1__125","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(6,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(7,44);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(8,60);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(9,67);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(10,76);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(11,69);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(12,63);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(13,55);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(14,40);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(15,33);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(16,33);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(17,25);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(18,21);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(19,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(20,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(21,15);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(22,12);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(23,13);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(24,6);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(25,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(26,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(27,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(28,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(29,2);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(30,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(32,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(34,4);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(35,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(37,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(38,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(42,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(44,2);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(45,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetBinContent(51,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetEntries(695);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 695    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  127.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   56.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet1__125);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet1__125->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__125->Draw("HIST");
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet1_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet1_2016_QuadJet_DoubleTag_16_tagged);
}
