#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16/CvB_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16", "CvB_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16->Range(-0.2,1.399817,1.133333,3.141959);
   CvB_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvB__419 = new TH1D("_DoubleJet_DoubleTag_tagged_CvB__419","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(1,490);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(2,91);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(3,75);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(4,96);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(5,98);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(6,121);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(7,169);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(8,234);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(9,338);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetBinContent(10,204);
   _DoubleJet_DoubleTag_tagged_CvB__419->SetEntries(1916);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1916   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4965");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.347");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvB__419->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvB__419);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvB__419->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_tagged_CvB__419->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvB__419->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__419->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__419->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16->Modified();
   CvB_2016_DoubleJet_DoubleTag_16->cd();
   CvB_2016_DoubleJet_DoubleTag_16->SetSelected(CvB_2016_DoubleJet_DoubleTag_16);
}
