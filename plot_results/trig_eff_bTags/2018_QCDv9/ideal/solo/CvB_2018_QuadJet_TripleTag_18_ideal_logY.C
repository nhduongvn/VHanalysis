#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal/CvB_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal", "CvB_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->Range(-0.2,1.837077,1.133333,3.840569);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__158 = new TH1D("_QuadJet_TripleTag_ideal_CvB__158","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(1,2305);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(2,406);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(3,404);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(4,357);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(5,307);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(6,262);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(7,245);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(8,218);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(9,516);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(10,240);
   _QuadJet_TripleTag_ideal_CvB__158->SetEntries(5260);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5260   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.304");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3229");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__158->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB__158->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal);
}
