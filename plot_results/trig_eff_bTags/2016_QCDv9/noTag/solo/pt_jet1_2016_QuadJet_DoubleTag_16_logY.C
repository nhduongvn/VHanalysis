#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_DoubleTag_16/pt_jet1_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_DoubleTag_16", "pt_jet1_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->Range(-100,-0.7390164,566.6667,3.640847);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet1__17 = new TH1D("_QuadJet_DoubleTag_pt_jet1__17","",50,0,500);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(5,2);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(6,147);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(7,528);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(8,834);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(9,842);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(10,829);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(11,710);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(12,592);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(13,483);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(14,384);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(15,317);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(16,249);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(17,208);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(18,160);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(19,128);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(20,116);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(21,99);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(22,85);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(23,81);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(24,55);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(25,35);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(26,41);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(27,45);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(28,27);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(29,24);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(30,20);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(31,15);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(32,9);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(33,9);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(34,15);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(35,12);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(36,12);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(37,11);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(38,8);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(39,2);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(40,1);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(41,4);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(42,5);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(44,3);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(45,1);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(46,3);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(47,3);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(48,4);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(50,3);
   _QuadJet_DoubleTag_pt_jet1__17->SetBinContent(51,23);
   _QuadJet_DoubleTag_pt_jet1__17->SetEntries(7184);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7184   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  121.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.49");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet1__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet1__17);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet1__17->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet1__17->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet1__17->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet1__17->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet1__17->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet1__17->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet1__17->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet1__17->Draw("HIST");
   pt_jet1_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet1_2016_QuadJet_DoubleTag_16->cd();
   pt_jet1_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet1_2016_QuadJet_DoubleTag_16);
}
