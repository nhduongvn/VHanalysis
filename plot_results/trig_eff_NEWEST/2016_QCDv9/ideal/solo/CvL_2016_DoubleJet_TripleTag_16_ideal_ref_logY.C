#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ideal_ref/CvL_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ideal_ref", "CvL_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,1.741879,1.133333,3.407943);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvL_ref__48 = new TH1D("_DoubleJet_TripleTag_ideal_CvL_ref__48","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(1,428);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(2,226);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(3,177);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(4,186);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(5,162);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(6,191);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(7,208);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(8,307);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(9,451);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetBinContent(10,920);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetEntries(3256);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3256   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6078");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3354");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvL_ref__48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvL_ref__48->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__48->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ideal_ref);
}
