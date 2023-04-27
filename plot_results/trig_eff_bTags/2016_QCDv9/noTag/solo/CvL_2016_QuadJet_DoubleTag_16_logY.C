#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16/CvL_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16 = new TCanvas("CvL_2016_QuadJet_DoubleTag_16", "CvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16->Range(-0.2,2.361188,1.133333,4.564256);
   CvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvL__89 = new TH1D("_QuadJet_DoubleTag_CvL__89","",10,0,1);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(1,11652);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(2,4246);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(3,1435);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(4,928);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(5,763);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(6,795);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(7,966);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(8,1317);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(9,2165);
   _QuadJet_DoubleTag_CvL__89->SetBinContent(10,4469);
   _QuadJet_DoubleTag_CvL__89->SetEntries(28736);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28736  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3651");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3617");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvL__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvL__89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvL__89->SetLineColor(ci);
   _QuadJet_DoubleTag_CvL__89->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_CvL__89->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvL__89->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__89->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__89->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__89->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvL__89->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__89->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__89->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__89->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__89->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__89->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16->Modified();
   CvL_2016_QuadJet_DoubleTag_16->cd();
   CvL_2016_QuadJet_DoubleTag_16->SetSelected(CvL_2016_QuadJet_DoubleTag_16);
}
