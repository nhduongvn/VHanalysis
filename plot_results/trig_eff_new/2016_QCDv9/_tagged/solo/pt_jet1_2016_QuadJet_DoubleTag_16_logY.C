#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_DoubleTag_16/pt_jet1_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_DoubleTag_16", "pt_jet1_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->Range(-100,-0.6091637,566.6667,2.472173);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet1__245 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet1__245","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(6,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(7,44);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(8,61);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(9,67);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(10,77);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(11,70);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(12,63);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(13,56);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(14,41);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(15,33);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(16,34);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(17,25);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(18,21);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(19,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(20,11);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(21,15);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(22,12);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(23,13);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(24,6);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(25,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(26,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(27,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(28,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(29,2);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(30,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(32,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(34,4);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(35,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(37,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(38,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(42,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(44,2);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(45,1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetBinContent(51,3);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetEntries(701);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 701    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  127.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet1__245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet1__245->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__245->Draw("HIST");
   pt_jet1_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet1_2016_QuadJet_DoubleTag_16->cd();
   pt_jet1_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet1_2016_QuadJet_DoubleTag_16);
}
