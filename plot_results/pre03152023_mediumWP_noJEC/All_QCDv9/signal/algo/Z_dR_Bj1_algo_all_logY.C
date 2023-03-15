#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,-0.1543978,7.029799,0.4870794);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLogy();
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.456346);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0.8367187);
   st_stack_120->SetMaximum(2.648084);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_120->GetXaxis()->SetRange(1,30);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Event/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.004315259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,0.8804004);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,1.508242);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,1.020122);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,0.5061779);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.1856901);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.09237555);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.07437197);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.03627108);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.02475008);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.01955008);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.01769981);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.01499856);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.01114254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.02086032);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.009562293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.003856013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.005436264);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.006131775);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,0.003158712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.04364781);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.0568138);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.046772);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.03312312);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.01994436);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.0139077);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.01214846);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.008551227);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.007303558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.006599182);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.005990345);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.005761165);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.005051211);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.006393639);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.00479766);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.002770611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,0.003189589);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,0.00358544);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.2048521);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.5305254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.4133022);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.1653102);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.04588198);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.02795631);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.02102685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.01603371);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.01249611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.011021);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.008704238);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.007665873);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.006375531);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.00483024);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.00593648);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.00420776);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.002951187);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.00185555);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.007604185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.01221295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.01075014);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.006834767);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.003579863);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.002780908);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.002432525);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.002178154);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.00188311);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.001768086);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.001525137);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.001479806);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.001305631);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.001164593);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.001322136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.001071304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.0009110187);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0007593483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
