#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_2b2c_ref/CvL_2018_QuadJet_TripleTag_18_2b2c_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_2b2c_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_2b2c_ref", "CvL_2018_QuadJet_TripleTag_18_2b2c_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->Range(-0.2,3.351227,1.133333,5.104288);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvL_ref__78 = new TH1D("_QuadJet_TripleTag_2b2c_CvL_ref__78","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(1,25115);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(2,44816);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(3,13583);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(4,8379);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(5,6928);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(6,6723);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(7,7781);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(8,10450);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(9,15985);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetBinContent(10,37016);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetEntries(176776);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 176776 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.469");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3577");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvL_ref__78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvL_ref__78->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__78->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_2b2c_ref);
}
