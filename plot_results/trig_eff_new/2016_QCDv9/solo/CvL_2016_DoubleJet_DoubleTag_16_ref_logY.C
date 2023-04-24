#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ref/CvL_2016_DoubleJet_DoubleTag_16_ref
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ref = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ref", "CvL_2016_DoubleJet_DoubleTag_16_ref",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->Range(-0.2,4.133963,1.133333,6.561011);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL_ref__180 = new TH1D("_DoubleJet_DoubleTag_CvL_ref__180","",10,0,1);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(1,1098392);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(2,352022);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(3,107627);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(4,63861);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(5,49225);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(6,47610);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(7,53600);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(8,70440);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(9,106923);
   _DoubleJet_DoubleTag_CvL_ref__180->SetBinContent(10,217064);
   _DoubleJet_DoubleTag_CvL_ref__180->SetEntries(2166764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2166764");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvL_ref__180->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvL_ref__180);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvL_ref__180->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvL_ref__180->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_CvL_ref__180->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvL_ref__180->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL_ref__180->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvL_ref__180->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL_ref__180->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__180->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ref->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ref->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ref);
}
