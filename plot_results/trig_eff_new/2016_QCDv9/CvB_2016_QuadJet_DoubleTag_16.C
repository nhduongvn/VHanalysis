#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16/CvB_2016_QuadJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16 = new TCanvas("CvB_2016_QuadJet_DoubleTag_16", "CvB_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16->Range(-0.2183529,0.008645135,1.171633,0.02206577);
   CvB_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvB__196 = new TH1D("_QuadJet_DoubleTag_CvB__196","",10,0,1);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(1,0.02022522);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(2,0.01827434);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(3,0.01697464);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(4,0.01677979);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(5,0.01493961);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(6,0.0130348);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(7,0.01265378);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(8,0.01132945);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(9,0.01073035);
   _QuadJet_DoubleTag_CvB__196->SetBinContent(10,0.0117251);
   _QuadJet_DoubleTag_CvB__196->SetEntries(0.1466671);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4414");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2863");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvB__196->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvB__196);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_CvB__196->SetLineColor(ci);
   _QuadJet_DoubleTag_CvB__196->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_CvB__196->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_CvB__196->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__196->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__196->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__196->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_CvB__196->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__196->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__196->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__196->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__196->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__196->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16->Modified();
   CvB_2016_QuadJet_DoubleTag_16->cd();
   CvB_2016_QuadJet_DoubleTag_16->SetSelected(CvB_2016_QuadJet_DoubleTag_16);
}
