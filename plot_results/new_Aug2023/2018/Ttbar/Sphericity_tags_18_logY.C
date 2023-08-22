void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.568007,1.133333,4.861547);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,8730.579);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,7184.675);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,4063.648);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2359.666);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1359.783);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,797.338);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,483.3266);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,299.9031);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,205.6676);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,138.7367);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,95.37309);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,71.7496);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,49.84547);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,40.00618);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,31.39402);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,23.56268);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.56978);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.639702);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.27611);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.398293);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.082398);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2376722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,27.75374);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,24.5579);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,18.39369);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,14.53228);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,10.30883);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,8.207814);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,7.051615);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,5.004261);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,4.83185);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,3.337401);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.925915);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.29859);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.948781);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.737168);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.51875);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.549543);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.022732);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.8350259);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.6789379);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.4175969);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2908497);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1397943);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(383722);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
