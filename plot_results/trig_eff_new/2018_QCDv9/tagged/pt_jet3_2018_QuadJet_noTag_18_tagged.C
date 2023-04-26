#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_tagged/pt_jet3_2018_QuadJet_noTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_tagged", "pt_jet3_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged->Range(-109.1764,-0.01468531,585.8166,0.1076923);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3__76 = new TH1D("_QuadJet_noTag_tagged_pt_jet3__76","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(5,0.001685003);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(6,0.003226419);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(7,0.005740181);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(8,0.007107882);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(9,0.00637105);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(10,0.006504065);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(11,0.008094645);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(12,0.006923838);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(13,0.005873715);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(14,0.01535088);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(15,0.01075269);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(16,0.004464286);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(17,0.007692308);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(18,0.01111111);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(20,0.03773585);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(26,0.09090909);
   _QuadJet_noTag_tagged_pt_jet3__76->SetEntries(0.229543);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  186.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  65.74");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet3__76->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet3_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet3_2018_QuadJet_noTag_18_tagged);
}
