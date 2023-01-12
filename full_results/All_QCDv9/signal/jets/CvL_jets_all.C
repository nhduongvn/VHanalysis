#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all()
{
//=========Macro generated from canvas: CvL_jets_all/CvL_jets_all
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all = new TCanvas("CvL_jets_all", "CvL_jets_all",0,0,600,600);
   CvL_jets_all->SetHighLightColor(2);
   CvL_jets_all->Range(-0.2183529,-597.6548,1.171633,4382.802);
   CvL_jets_all->SetFillColor(0);
   CvL_jets_all->SetFillStyle(4000);
   CvL_jets_all->SetBorderMode(0);
   CvL_jets_all->SetBorderSize(2);
   CvL_jets_all->SetLeftMargin(0.15709);
   CvL_jets_all->SetRightMargin(0.1234783);
   CvL_jets_all->SetBottomMargin(0.12);
   CvL_jets_all->SetFrameFillStyle(1000);
   CvL_jets_all->SetFrameBorderMode(0);
   CvL_jets_all->SetFrameFillStyle(1000);
   CvL_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3884.756);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,0,1);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(3884.756);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_12->GetXaxis()->SetRange(1,20);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/0.05");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_jets_CvL_all_stack_1 = new TH1D("VbbHcc_jets_CvL_all_stack_1","",20,0,1);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(1,1640.797);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(2,2181.631);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(3,907.4616);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(4,470.6562);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(5,317.5188);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(6,234.7769);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(7,188.8241);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(8,157.511);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(9,144.4409);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(10,129.3286);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(11,117.7282);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(12,103.6001);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(13,102.241);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(14,93.44063);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(15,88.0851);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(16,82.47238);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(17,82.06135);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(18,81.91971);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(19,82.73307);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(20,23.40383);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(1,1.893281);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(2,2.161455);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(3,1.388445);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(4,1.001495);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(5,0.8235485);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(6,0.710521);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(7,0.6389218);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(8,0.5848631);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(9,0.5604128);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(10,0.5309538);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(11,0.5080215);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(12,0.4758709);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(13,0.4752476);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(14,0.453057);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(15,0.4410275);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(16,0.4283889);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(17,0.4259309);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(18,0.4267332);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(19,0.4279398);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(20,0.2268606);
   VbbHcc_jets_CvL_all_stack_1->SetEntries(4282681);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_all_stack_2 = new TH1D("VbbHcc_jets_CvL_all_stack_2","",20,0,1);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(1,335.9206);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(2,408.2066);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(3,160.3855);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(4,82.43431);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(5,55.32585);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(6,40.97705);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(7,32.92242);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(8,27.44698);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(9,25.5155);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(10,22.64739);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(11,20.71666);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(12,18.5422);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(13,18.11682);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(14,16.75365);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(15,16.18072);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(16,15.36294);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(17,15.29272);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(18,15.82208);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(19,17.21741);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(20,5.735783);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(1,0.3163045);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(2,0.3438018);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(3,0.213687);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(4,0.1535319);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(5,0.1257845);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(6,0.1087224);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(7,0.0976681);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(8,0.0893224);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(9,0.08634125);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(10,0.08148229);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(11,0.07821035);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(12,0.07417858);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(13,0.07373713);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(14,0.0710175);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(15,0.06964622);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(16,0.06787621);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(17,0.06795765);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(18,0.06907317);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(19,0.07209378);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(20,0.04185601);
   VbbHcc_jets_CvL_all_stack_2->SetEntries(5625881);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvL_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all->Modified();
   CvL_jets_all->cd();
   CvL_jets_all->SetSelected(CvL_jets_all);
}
