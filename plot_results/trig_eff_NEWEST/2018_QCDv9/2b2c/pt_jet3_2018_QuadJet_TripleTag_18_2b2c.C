#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_2b2c/pt_jet3_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_2b2c", "pt_jet3_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet3__64 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet3__64","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(5,0.1806854);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(6,0.2320656);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(7,0.2848653);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(8,0.3431068);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(9,0.3534013);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(10,0.3840552);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(11,0.3944477);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(12,0.3883225);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(13,0.4137931);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(14,0.4315353);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(15,0.4);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(16,0.4468085);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(17,0.3897059);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(18,0.4081633);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(19,0.3809524);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(20,0.4705882);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(21,0.4468085);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(22,0.2666667);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(23,0.25);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(24,0.4545455);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(25,0.5);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(26,0.2727273);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(27,0.2857143);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(28,0.5714286);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(29,0.3333333);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(32,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(33,0.5);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(34,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetBinContent(35,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetEntries(12.78372);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  214.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  92.42");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet3__64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_pt_jet3__64->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__64->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_2b2c);
}
