#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16", "pt_jet2_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->Range(-100,-0.7662683,566.6667,3.886114);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet2__53 = new TH1D("_QuadJet_DoubleTag_pt_jet2__53","",50,0,500);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(5,90);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(6,969);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(7,1391);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(8,1310);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(9,941);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(10,694);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(11,507);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(12,335);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(13,250);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(14,154);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(15,125);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(16,86);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(17,55);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(18,60);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(19,30);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(20,28);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(21,33);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(22,17);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(23,11);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(24,8);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(25,6);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(26,3);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(27,5);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(28,4);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(29,4);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(30,3);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(32,2);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(33,3);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(34,1);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(37,1);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(38,1);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(41,1);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(46,1);
   _QuadJet_DoubleTag_pt_jet2__53->SetBinContent(51,2);
   _QuadJet_DoubleTag_pt_jet2__53->SetEntries(7131);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7131   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  87.27");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  33.63");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet2__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet2__53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet2__53->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet2__53->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet2__53->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet2__53->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__53->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet2__53->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__53->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__53->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
