#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16/CvB_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16", "CvB_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16->Range(-0.2,2.192842,1.133333,4.129408);
   CvB_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvB__203 = new TH1D("_DoubleJet_DoubleTag_CvB__203","",10,0,1);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(1,3420);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(2,633);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(3,511);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(4,487);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(5,540);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(6,715);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(7,1114);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(8,2050);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(9,4552);
   _DoubleJet_DoubleTag_CvB__203->SetBinContent(10,2206);
   _DoubleJet_DoubleTag_CvB__203->SetEntries(16228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5739");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3491");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvB__203->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvB__203);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvB__203->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvB__203->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_CvB__203->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvB__203->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__203->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__203->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__203->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvB__203->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__203->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__203->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__203->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__203->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__203->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16->Modified();
   CvB_2016_DoubleJet_DoubleTag_16->cd();
   CvB_2016_DoubleJet_DoubleTag_16->SetSelected(CvB_2016_DoubleJet_DoubleTag_16);
}
