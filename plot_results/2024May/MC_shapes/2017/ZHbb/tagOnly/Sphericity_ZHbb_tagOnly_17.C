#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_17/Sphericity_ZHbb_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_17 = new TCanvas("Sphericity_ZHbb_tagOnly_17", "Sphericity_ZHbb_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_17->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_17->Range(-0.2,-4.050751,1.133333,36.45676);
   Sphericity_ZHbb_tagOnly_17->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_17->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_17->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_17->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1145 = new TH1D("VH_tagOnly_Sphericity__1145","",25,0,1);
   VH_tagOnly_Sphericity__1145->SetBinContent(1,30.86286);
   VH_tagOnly_Sphericity__1145->SetBinContent(2,25.67212);
   VH_tagOnly_Sphericity__1145->SetBinContent(3,14.56617);
   VH_tagOnly_Sphericity__1145->SetBinContent(4,9.496018);
   VH_tagOnly_Sphericity__1145->SetBinContent(5,6.124981);
   VH_tagOnly_Sphericity__1145->SetBinContent(6,3.233362);
   VH_tagOnly_Sphericity__1145->SetBinContent(7,1.552488);
   VH_tagOnly_Sphericity__1145->SetBinContent(8,0.8470224);
   VH_tagOnly_Sphericity__1145->SetBinContent(9,0.5150449);
   VH_tagOnly_Sphericity__1145->SetBinContent(10,0.4229955);
   VH_tagOnly_Sphericity__1145->SetBinContent(11,0.2764777);
   VH_tagOnly_Sphericity__1145->SetBinContent(12,0.2314621);
   VH_tagOnly_Sphericity__1145->SetBinContent(13,0.1791399);
   VH_tagOnly_Sphericity__1145->SetBinContent(14,0.125129);
   VH_tagOnly_Sphericity__1145->SetBinContent(15,0.0894838);
   VH_tagOnly_Sphericity__1145->SetBinContent(16,0.06768195);
   VH_tagOnly_Sphericity__1145->SetBinContent(17,0.05362112);
   VH_tagOnly_Sphericity__1145->SetBinContent(18,0.02937929);
   VH_tagOnly_Sphericity__1145->SetBinContent(19,0.02355262);
   VH_tagOnly_Sphericity__1145->SetBinContent(20,0.007263609);
   VH_tagOnly_Sphericity__1145->SetBinContent(21,0.001080696);
   VH_tagOnly_Sphericity__1145->SetBinContent(22,0.002280564);
   VH_tagOnly_Sphericity__1145->SetBinContent(23,0.003579848);
   VH_tagOnly_Sphericity__1145->SetBinError(1,0.2034424);
   VH_tagOnly_Sphericity__1145->SetBinError(2,0.184342);
   VH_tagOnly_Sphericity__1145->SetBinError(3,0.1380148);
   VH_tagOnly_Sphericity__1145->SetBinError(4,0.113025);
   VH_tagOnly_Sphericity__1145->SetBinError(5,0.09388492);
   VH_tagOnly_Sphericity__1145->SetBinError(6,0.06636658);
   VH_tagOnly_Sphericity__1145->SetBinError(7,0.04665651);
   VH_tagOnly_Sphericity__1145->SetBinError(8,0.03337141);
   VH_tagOnly_Sphericity__1145->SetBinError(9,0.0269095);
   VH_tagOnly_Sphericity__1145->SetBinError(10,0.02729604);
   VH_tagOnly_Sphericity__1145->SetBinError(11,0.01766523);
   VH_tagOnly_Sphericity__1145->SetBinError(12,0.01848508);
   VH_tagOnly_Sphericity__1145->SetBinError(13,0.01581931);
   VH_tagOnly_Sphericity__1145->SetBinError(14,0.01370544);
   VH_tagOnly_Sphericity__1145->SetBinError(15,0.01054174);
   VH_tagOnly_Sphericity__1145->SetBinError(16,0.008255314);
   VH_tagOnly_Sphericity__1145->SetBinError(17,0.008228209);
   VH_tagOnly_Sphericity__1145->SetBinError(18,0.005934998);
   VH_tagOnly_Sphericity__1145->SetBinError(19,0.005334951);
   VH_tagOnly_Sphericity__1145->SetBinError(20,0.002491406);
   VH_tagOnly_Sphericity__1145->SetBinError(21,0.0006281291);
   VH_tagOnly_Sphericity__1145->SetBinError(22,0.001945992);
   VH_tagOnly_Sphericity__1145->SetBinError(23,0.002980706);
   VH_tagOnly_Sphericity__1145->SetEntries(157489);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1145->SetLineColor(ci);
   VH_tagOnly_Sphericity__1145->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1145->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1145->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1145->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1145->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1145->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1145->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1145->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1145->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1145->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_17->Modified();
   Sphericity_ZHbb_tagOnly_17->cd();
   Sphericity_ZHbb_tagOnly_17->SetSelected(Sphericity_ZHbb_tagOnly_17);
}
