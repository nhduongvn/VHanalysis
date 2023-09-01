#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.001702335,1.133333,0.01532102);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__225 = new TH1D("VbbHcc_tags_Sphericity__225","",25,0,1);
   VbbHcc_tags_Sphericity__225->SetBinContent(1,0.01297017);
   VbbHcc_tags_Sphericity__225->SetBinContent(2,0.01011996);
   VbbHcc_tags_Sphericity__225->SetBinContent(3,0.004007561);
   VbbHcc_tags_Sphericity__225->SetBinContent(4,0.004092206);
   VbbHcc_tags_Sphericity__225->SetBinContent(5,0.002046131);
   VbbHcc_tags_Sphericity__225->SetBinContent(6,0.0008216631);
   VbbHcc_tags_Sphericity__225->SetBinContent(7,0.0005457665);
   VbbHcc_tags_Sphericity__225->SetBinContent(8,0.0002016328);
   VbbHcc_tags_Sphericity__225->SetBinContent(9,0.0006455148);
   VbbHcc_tags_Sphericity__225->SetBinContent(12,0.0003993986);
   VbbHcc_tags_Sphericity__225->SetBinError(1,0.001938449);
   VbbHcc_tags_Sphericity__225->SetBinError(2,0.001698736);
   VbbHcc_tags_Sphericity__225->SetBinError(3,0.001122776);
   VbbHcc_tags_Sphericity__225->SetBinError(4,0.00110207);
   VbbHcc_tags_Sphericity__225->SetBinError(5,0.0007353511);
   VbbHcc_tags_Sphericity__225->SetBinError(6,0.0004750752);
   VbbHcc_tags_Sphericity__225->SetBinError(7,0.0003861674);
   VbbHcc_tags_Sphericity__225->SetBinError(8,0.0002016328);
   VbbHcc_tags_Sphericity__225->SetBinError(9,0.0004583857);
   VbbHcc_tags_Sphericity__225->SetBinError(12,0.000316024);
   VbbHcc_tags_Sphericity__225->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity__225->SetFillColor(ci);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
