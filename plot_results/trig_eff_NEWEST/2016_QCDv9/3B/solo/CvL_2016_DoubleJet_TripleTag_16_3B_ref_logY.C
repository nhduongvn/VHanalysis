#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_3B_ref/CvL_2016_DoubleJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_3B_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_3B_ref", "CvL_2016_DoubleJet_TripleTag_16_3B_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->Range(-0.2,2.909355,1.133333,4.518032);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_CvL_ref__102 = new TH1D("_DoubleJet_TripleTag_3B_CvL_ref__102","",10,0,1);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(1,11108);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(2,4268);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(3,2526);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(4,2514);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(5,2351);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(6,2529);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(7,2919);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(8,3814);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(9,6071);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetBinContent(10,12012);
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetEntries(50112);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50112  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.533");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3611");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_CvL_ref__102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_CvL_ref__102->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL_ref__102->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL_ref__102->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_3B_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_3B_ref);
}
