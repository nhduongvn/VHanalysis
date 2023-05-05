#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_2b2c/BvL_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("BvL_2016_QuadJet_TripleTag_16_2b2c", "BvL_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c->Range(-0.2183529,0.3583034,1.171633,0.4580835);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL__145 = new TH1D("_QuadJet_TripleTag_2b2c_BvL__145","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(1,0.3879805);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(2,0.4274281);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(3,0.4443994);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(4,0.3873348);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(5,0.3986681);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(6,0.4036071);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(7,0.3924155);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(8,0.3738066);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(9,0.3896513);
   _QuadJet_TripleTag_2b2c_BvL__145->SetBinContent(10,0.3985744);
   _QuadJet_TripleTag_2b2c_BvL__145->SetEntries(4.003866);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4937");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.287");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL__145->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL__145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_BvL__145->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL__145->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL__145->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_2b2c_BvL__145->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__145->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_BvL__145->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__145->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__145->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_QuadJet45_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   BvL_2016_QuadJet_TripleTag_16_2b2c->Modified();
   BvL_2016_QuadJet_TripleTag_16_2b2c->cd();
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetSelected(BvL_2016_QuadJet_TripleTag_16_2b2c);
}
