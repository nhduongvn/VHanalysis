void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.132114,1.133333,4.607616);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,4529.961);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,3836.17);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2192.737);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1259.53);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,739.8592);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,429.0144);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,255.0486);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,158.5587);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,103.9425);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,73.27533);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,51.55581);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,35.03547);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,25.75892);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,19.58744);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,14.40097);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,12.12151);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,8.301374);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,5.291689);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,2.735153);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.459324);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5571593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,16.8705);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,15.54485);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,11.75089);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,8.904286);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,6.830191);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,5.19597);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,3.998501);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.153987);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.550231);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.145494);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.805484);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.488597);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.274636);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.109906);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,0.9481104);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.8734456);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.7207292);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.5795202);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.4142668);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3032688);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1969856);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(225965);

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
