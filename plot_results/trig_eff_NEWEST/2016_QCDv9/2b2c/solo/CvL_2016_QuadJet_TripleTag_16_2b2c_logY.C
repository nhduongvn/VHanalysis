#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_2b2c/CvL_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("CvL_2016_QuadJet_TripleTag_16_2b2c", "CvL_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_2b2c->Range(-0.2,2.844526,1.133333,4.523424);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvL__152 = new TH1D("_QuadJet_TripleTag_2b2c_CvL__152","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(1,7049);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(2,11967);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(3,3818);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(4,2579);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(5,2072);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(6,2058);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(7,2388);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(8,3199);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(9,4807);
   _QuadJet_TripleTag_2b2c_CvL__152->SetBinContent(10,10343);
   _QuadJet_TripleTag_2b2c_CvL__152->SetEntries(50280);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50280  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.477");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3547");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvL__152->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvL__152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvL__152->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvL__152->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_2b2c_CvL__152->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvL__152->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__152->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvL__152->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__152->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__152->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_2b2c->Modified();
   CvL_2016_QuadJet_TripleTag_16_2b2c->cd();
   CvL_2016_QuadJet_TripleTag_16_2b2c->SetSelected(CvL_2016_QuadJet_TripleTag_16_2b2c);
}
