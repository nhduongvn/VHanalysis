#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16", "pt_jet2_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet2__274 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet2__274","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(5,0.002574003);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(6,0.004588208);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(7,0.008207673);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(8,0.01253918);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(9,0.0190977);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(10,0.032);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(11,0.02993131);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(12,0.03066202);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(13,0.01780694);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(14,0.02405063);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(15,0.02068966);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(16,0.03501094);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(17,0.02710843);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(18,0.004115226);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(19,0.02453988);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(20,0.02758621);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(21,0.02631579);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(22,0.05063291);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(23,0.02702703);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(24,0.02);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(29,0.1428571);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(30,0.07692308);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(33,0.1428571);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetBinContent(35,0.2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetEntries(1.007121);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  246.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  89.31");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet2__274);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__274->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16);
}
