void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-10.5814,1.133333,95.23261);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,80.6202);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,39.53565);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,33.16711);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,16.1531);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,12.31899);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,4.352639);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.684147);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.9134231);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.494189);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.378309);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6795883);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.6434752);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.92856);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.09267052);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.08672542);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2670805);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.007017162);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.07559766);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.08634022);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.178064);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,9.019756);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,3.820904);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,7.829263);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.367081);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.224888);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.6037053);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.072404);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2756993);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4720827);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,1.101373);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.2197854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.2471406);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.043974);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.07692066);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.07044878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1412942);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.006466144);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.07531624);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.07966502);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.178064);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
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
