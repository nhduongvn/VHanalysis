#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16_ideal/pt_jet2_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet2_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet2__250 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet2__250","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(5,0.0173913);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(6,0.01734694);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(7,0.01887782);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(8,0.01791531);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(9,0.02142386);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(10,0.032);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(11,0.02993131);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(12,0.03066202);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(13,0.01780694);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(14,0.02405063);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(15,0.02068966);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(16,0.03501094);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(17,0.02710843);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(18,0.004115226);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(19,0.02453988);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(20,0.02758621);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(21,0.02631579);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(22,0.05063291);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(23,0.02702703);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(24,0.02);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(29,0.1428571);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(30,0.07692308);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(33,0.1428571);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(35,0.2);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetEntries(1.05307);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  238.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  95.47");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet2__250);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16_ideal);
}
