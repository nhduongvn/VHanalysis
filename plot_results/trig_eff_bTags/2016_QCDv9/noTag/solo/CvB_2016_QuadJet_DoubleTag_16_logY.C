#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16/CvB_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16 = new TCanvas("CvB_2016_QuadJet_DoubleTag_16", "CvB_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16->Range(-0.2,2.43587,1.133333,4.366167);
   CvB_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvB__101 = new TH1D("_QuadJet_DoubleTag_CvB__101","",10,0,1);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(1,6271);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(2,1049);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(3,866);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(4,851);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(5,945);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(6,1175);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(7,1957);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(8,3678);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(9,7863);
   _QuadJet_DoubleTag_CvB__101->SetBinContent(10,4081);
   _QuadJet_DoubleTag_CvB__101->SetEntries(28736);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28736  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5717");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3522");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvB__101->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvB__101);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvB__101->SetLineColor(ci);
   _QuadJet_DoubleTag_CvB__101->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_CvB__101->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvB__101->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__101->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__101->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__101->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvB__101->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__101->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__101->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__101->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__101->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__101->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16->Modified();
   CvB_2016_QuadJet_DoubleTag_16->cd();
   CvB_2016_QuadJet_DoubleTag_16->SetSelected(CvB_2016_QuadJet_DoubleTag_16);
}
