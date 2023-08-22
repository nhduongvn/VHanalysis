void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-784.3478,1.133333,7059.13);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,5975.983);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,4964.73);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2833.078);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1667.272);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,972.1904);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,571.0532);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,327.6593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,203.3825);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,139.7563);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,96.87889);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,71.46616);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,52.95725);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,38.97959);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,28.76303);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,21.43737);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,17.20586);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,13.51081);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,8.30893);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,4.832193);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.955113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5051876);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.3178221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,19.9313);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,18.0395);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,13.65364);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,10.51363);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,8.046929);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.167679);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.68274);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.681983);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.055919);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.546334);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.179135);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.88334);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.623355);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.368131);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.199512);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.09862);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9540285);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7384359);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5583424);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3578054);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1891566);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1622571);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(305979);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
