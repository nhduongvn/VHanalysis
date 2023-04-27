#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2183529,0.008869356,1.171633,0.02221476);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_BvL__76 = new TH1D("_QuadJet_DoubleTag_BvL__76","",10,0,1);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(1,0.01094289);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(2,0.01330079);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(3,0.01461857);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(4,0.0164664);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(5,0.0165922);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(6,0.01770986);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(7,0.01899332);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(8,0.01673435);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(9,0.01890918);
   _QuadJet_DoubleTag_BvL__76->SetBinContent(10,0.02038454);
   _QuadJet_DoubleTag_BvL__76->SetEntries(0.1646521);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5436");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.279");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_BvL__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_BvL__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_BvL__76->SetLineColor(ci);
   _QuadJet_DoubleTag_BvL__76->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_BvL__76->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_BvL__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_BvL__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__76->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}
