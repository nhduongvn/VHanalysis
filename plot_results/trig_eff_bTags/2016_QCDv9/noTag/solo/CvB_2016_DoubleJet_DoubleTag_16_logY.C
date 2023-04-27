#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16/CvB_2016_DoubleJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16", "CvB_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16->Range(-0.2,2.1964,1.133333,4.132919);
   CvB_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvB__107 = new TH1D("_DoubleJet_DoubleTag_CvB__107","",10,0,1);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(1,3449);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(2,638);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(3,513);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(4,491);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(5,545);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(6,718);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(7,1122);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(8,2065);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(9,4589);
   _DoubleJet_DoubleTag_CvB__107->SetBinContent(10,2226);
   _DoubleJet_DoubleTag_CvB__107->SetEntries(16356);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16356  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5739");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3492");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvB__107->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvB__107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvB__107->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvB__107->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_CvB__107->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvB__107->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__107->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__107->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__107->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvB__107->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__107->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__107->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__107->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__107->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__107->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16->Modified();
   CvB_2016_DoubleJet_DoubleTag_16->cd();
   CvB_2016_DoubleJet_DoubleTag_16->SetSelected(CvB_2016_DoubleJet_DoubleTag_16);
}
