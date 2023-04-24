#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2,2.189838,1.133333,4.747496);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_BvL__149 = new TH1D("_QuadJet_DoubleTag_BvL__149","",10,0,1);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(1,16375);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(2,1456);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(3,816);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(4,672);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(5,558);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(6,578);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(7,605);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(8,615);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(9,914);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(10,5935);
   _QuadJet_DoubleTag_BvL__149->SetEntries(28524);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28524  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3164");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.402");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_BvL__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_BvL__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_BvL__149->SetLineColor(ci);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}
