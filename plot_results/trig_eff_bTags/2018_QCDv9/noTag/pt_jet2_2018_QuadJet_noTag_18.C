#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18/pt_jet2_2018_QuadJet_noTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18 = new TCanvas("pt_jet2_2018_QuadJet_noTag_18", "pt_jet2_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18->Range(-109.1764,-0.01242604,585.8166,0.09112426);
   pt_jet2_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet2_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet2_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2__16 = new TH1D("_QuadJet_noTag_pt_jet2__16","",50,0,500);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(5,0.0006110602);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(6,0.00098491);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(7,0.002688983);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(8,0.004341159);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(9,0.005303066);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(10,0.006238884);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(11,0.006760086);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(12,0.006823159);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(13,0.00630354);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(14,0.0077616);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(15,0.007436399);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(16,0.006006955);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(17,0.005985401);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(18,0.0067659);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(19,0.007118376);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(20,0.007223942);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(21,0.005777778);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(22,0.007497116);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(23,0.009209517);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(24,0.002879079);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(25,0.007653061);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(26,0.01286174);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(27,0.002114165);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(28,0.007556675);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(30,0.008097166);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(31,0.01041667);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(32,0.005347594);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(34,0.0078125);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(37,0.01351351);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(38,0.01754386);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(50,0.07692308);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(51,0.01492537);
   _QuadJet_noTag_pt_jet2__16->SetEntries(0.2835569);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  298.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    144");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2__16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2__16);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet2__16->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18->Modified();
   pt_jet2_2018_QuadJet_noTag_18->cd();
   pt_jet2_2018_QuadJet_noTag_18->SetSelected(pt_jet2_2018_QuadJet_noTag_18);
}
