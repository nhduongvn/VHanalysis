#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_tagged/CvL_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_tagged", "CvL_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2183529,0.01062162,1.171633,0.02214516);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvL__202 = new TH1D("_DoubleJet_DoubleTag_tagged_CvL__202","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(1,0.02056479);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(2,0.01608895);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(3,0.01570736);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(4,0.01395573);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(5,0.01591896);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(6,0.01241208);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(7,0.01568981);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(8,0.01536957);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(9,0.01771381);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetBinContent(10,0.01721194);
   _DoubleJet_DoubleTag_tagged_CvL__202->SetEntries(0.160633);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4941");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3001");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvL__202->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvL__202);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_CvL__202->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_tagged_CvL__202->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_CvL__202->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__202->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__202->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_tagged->cd();
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_tagged);
}
