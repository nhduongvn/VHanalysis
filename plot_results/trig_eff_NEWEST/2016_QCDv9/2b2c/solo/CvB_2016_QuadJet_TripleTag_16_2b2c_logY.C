#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_2b2c/CvB_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("CvB_2016_QuadJet_TripleTag_16_2b2c", "CvB_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c->Range(-0.2,2.814723,1.133333,4.573105);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB__158 = new TH1D("_QuadJet_TripleTag_2b2c_CvB__158","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(1,13174);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(2,2375);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(3,1957);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(4,2444);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(5,2856);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(6,3360);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(7,4545);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(8,6155);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(9,8510);
   _QuadJet_TripleTag_2b2c_CvB__158->SetBinContent(10,4904);
   _QuadJet_TripleTag_2b2c_CvB__158->SetEntries(50280);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50280  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4874");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.346");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB__158->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB__158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvB__158->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB__158->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB__158->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvB__158->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__158->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvB__158->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__158->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__158->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_2b2c->Modified();
   CvB_2016_QuadJet_TripleTag_16_2b2c->cd();
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetSelected(CvB_2016_QuadJet_TripleTag_16_2b2c);
}
