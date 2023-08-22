void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-0.3825043,1.133333,5.948068);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,109008.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,18367.17);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,2722.399);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,724.4029);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,109.3248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,97.8912);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,95.62087);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,42.6508);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,51.06544);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,3.56109);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,4.850397);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,22.73851);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,4859.021);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2778.016);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,622.0418);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,249.2517);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,28.79644);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,33.44965);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,39.48819);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,21.8223);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,32.42769);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,2.543199);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,4.850397);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,22.73851);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(8758);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
