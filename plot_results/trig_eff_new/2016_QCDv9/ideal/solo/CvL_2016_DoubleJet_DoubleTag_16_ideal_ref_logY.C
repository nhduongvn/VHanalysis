#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ideal_ref/CvL_2016_DoubleJet_DoubleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ideal_ref = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ideal_ref", "CvL_2016_DoubleJet_DoubleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->Range(-0.2,3.01551,1.133333,4.75672);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvL_ref__312 = new TH1D("_DoubleJet_DoubleTag_ideal_CvL_ref__312","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(1,10268);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(2,20186);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(3,6153);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(4,4071);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(5,3095);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(6,3096);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(7,3499);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(8,4593);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(9,6933);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetBinContent(10,13670);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetEntries(75564);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 75564  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4524");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3484");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvL_ref__312);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL_ref__312->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ideal_ref);
}
