#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ideal/CvL_2016_QuadJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ideal", "CvL_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2183529,0.01617559,1.171633,0.03112068);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvL__304 = new TH1D("_QuadJet_DoubleTag_ideal_CvL__304","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(1,0.02907107);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(2,0.0241137);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(3,0.02168394);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(4,0.01849767);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(5,0.02425876);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(6,0.0220054);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(7,0.02293247);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(8,0.02408964);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(9,0.02385796);
   _QuadJet_DoubleTag_ideal_CvL__304->SetBinContent(10,0.02589955);
   _QuadJet_DoubleTag_ideal_CvL__304->SetEntries(0.2364102);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4985");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2974");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvL__304->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvL__304);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_CvL__304->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvL__304->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_ideal_CvL__304->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_ideal_CvL__304->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL__304->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_CvL__304->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL__304->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__304->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_ideal->Modified();
   CvL_2016_QuadJet_DoubleTag_16_ideal->cd();
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetSelected(CvL_2016_QuadJet_DoubleTag_16_ideal);
}
