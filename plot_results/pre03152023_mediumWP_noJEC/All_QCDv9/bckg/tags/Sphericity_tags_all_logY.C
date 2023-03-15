#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all_logY()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-0.5784398,1.171633,7.748511);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetLogy();
   Sphericity_tags_all->SetLeftMargin(0.15709);
   Sphericity_tags_all->SetRightMargin(0.1234783);
   Sphericity_tags_all->SetBottomMargin(0.12);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3889502);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(2.635083);
   st_stack_60->SetMaximum(8237883);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("Sphericity");
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Event/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,1081044);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,2512246);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,2935276);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,2690301);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,2344486);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,2058012);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,1606305);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,1340464);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,1171447);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,1004600);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,928356.1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,838400.4);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,631961.5);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,507522);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,411426.9);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,311491);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,273913);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,222425);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,87390.24);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(20,34885.06);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(21,27913.77);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(22,2124.738);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(23,804.9425);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,18564.8);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,60741.8);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,73691.39);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,78958.84);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,75587.22);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,68464.72);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,45508.31);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,41555.75);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,35675.77);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,40185.02);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,47224.63);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,57672.7);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,33665.02);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,17308.82);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,23368.15);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,12566.88);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,35971.26);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,33918.8);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,6827.046);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(20,4621.003);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(21,11935.09);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(22,664.5584);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(23,461.5271);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(777279);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,78569.23);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,217772.5);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,293011.1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,311209.3);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,301978.4);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,282508.4);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,260362.5);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,238177.1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,217477.9);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,197072.4);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,177935.7);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,159645);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,142056);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,124507.1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,107089.7);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,89574.15);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,71609.61);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,53405.02);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,34604.32);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,17813.91);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,7741.651);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(22,2824.704);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(23,737.856);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(24,110.2849);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(25,3.140464);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,77.73059);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,129.6651);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,151.2766);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,156.2262);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,153.9023);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,148.9954);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,143.009);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,137.0218);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,130.4811);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,124.5077);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,118.664);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,112.0546);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,105.7173);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,99.32132);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,92.35982);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,83.89083);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,75.03456);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,65.12633);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,52.73563);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,37.97508);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,24.75166);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(22,14.86173);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(23,7.673019);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(24,2.890127);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(25,0.4822561);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(5.04042e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
